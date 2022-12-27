function model.alignCalibrationBallsWithInputAndReturnRedBall()
    local h=simBWF.getReferencedObjectHandle(model.handle,model.objRefIdx.INPUT)
    
    -- First align the tracking window with its input item:
    if h>=0 then
        h=simBWF.callCustomizationScriptFunction("model.ext.alignCalibrationBallsWithInputAndReturnRedBall",h)

        local p=sim.getObjectOrientation(model.handle,h)
        local correct=(math.abs(p[1])>0.1*math.pi/180) or (math.abs(p[2])>0.1*math.pi/180) or (math.abs(p[3])>0.1*math.pi/180)
        local p=sim.getObjectPosition(model.handle,h)

        -- Ball1 should be distant by the calibration ball distance from the connected item's ball1:
        local c=model.readInfo()
        local d=c['calibrationBallOffset']
        if math.abs(p[1]-d[1])>0.001 or math.abs(p[2]-d[2])>0.001 or math.abs(p[3]-d[3])>0.001 then
            p=d
            correct=true
        end
        if correct then
            sim.setObjectOrientation(model.handle,h,{0,0,0})
            sim.setObjectPosition(model.handle,h,{p[1],p[2],p[3]})
        end
        
        local r,p=sim.getObjectInt32Parameter(model.handle,sim.objintparam_manipulation_permissions)
        r=(r|1+4)-(1+4) -- forbid rotation and translation when simulation is not running
        sim.setObjectInt32Parameter(model.handle,sim.objintparam_manipulation_permissions,r)
    else
        local r,p=sim.getObjectInt32Parameter(model.handle,sim.objintparam_manipulation_permissions)
        r=(r|1+4) -- allow rotation and translation when simulation is not running
        sim.setObjectInt32Parameter(model.handle,sim.objintparam_manipulation_permissions,r)
    end
    return model.handle
end

function model.setGreenAndBlueCalibrationBallsInPlace()
    -- Ball2 should be on the X axis of ball1's frame, and between [-0.1 and 0.5]:
    local p=sim.getObjectPosition(model.handles.calibrationBalls[2],model.handles.calibrationBalls[1])
    local correct=(math.abs(p[2])>0.0005) or (math.abs(p[3])>0.0005)
    if p[1]<0.09 then 
        p[1]=0.1
        correct=true
    end
    if p[1]>0.51 then 
        p[1]=0.5
        correct=true
    end
    if correct then
        sim.setObjectPosition(model.handles.calibrationBalls[2],model.handles.calibrationBalls[1],{p[1],0,0})
    end

    -- Ball3 should be in the X/Y plane of ball1's frame, and within +- 0.5 of the x/y origin:
    local p=sim.getObjectPosition(model.handles.calibrationBalls[3],model.handles.calibrationBalls[1])
    local correct=(math.abs(p[3])>0.0005)
    if p[2]>-0.1 and p[2]<0 then
        p[2]=0.11
        correct=true
    end
    if p[2]<0.1 and p[2]>=0 then
        p[2]=-0.11
        correct=true
    end
    if p[1]<-0.51 then 
        p[1]=-0.5
        correct=true
    end
    if p[1]>0.51 then 
        p[1]=0.5
        correct=true
    end
    if p[2]<-0.51 then 
        p[2]=-0.5
        correct=true
    end
    if p[2]>0.51 then 
        p[2]=0.5
        correct=true
    end
    if correct then
        sim.setObjectPosition(model.handles.calibrationBalls[3],model.handles.calibrationBalls[1],{p[1],p[2],0})
    end
end

function model.avoidCircularInput(inputItem)
    -- We have: trackWind --> item1 --> item2 ... --> itemN
    -- None of the above item's input should be 'inputItem'
    -- If 'inputItem' is -1, then none of the above item's input should be 'model.handle'
    -- A. Check this tracking window:
    if inputItem>0 then
        local h=simBWF.getReferencedObjectHandle(model.handle,model.objRefIdx.INPUT)
        if h==inputItem then
            simBWF.setReferencedObjectHandle(model.handle,model.objRefIdx.INPUT,-1) -- this input closed the loop. We open it here.
            model.updatePluginRepresentation()
        end
    end
    
    if inputItem==-1 then
        inputItem=model.handle
    end

    -- B. Check connected items:
    local h=simBWF.getReferencedObjectHandle(model.handle,model.objRefIdx.INPUT)
    if h>=0 then
        simBWF.callCustomizationScriptFunction("model.ext.avoidCircularInput",h,inputItem)
    end
end

function model.forbidInput(inputItem)
    local h=simBWF.getReferencedObjectHandle(model.handle,model.objRefIdx.INPUT)
    if h==inputItem then
        simBWF.setReferencedObjectHandle(model.handle,model.objRefIdx.INPUT,-1)
        model.updatePluginRepresentation()
    end
end