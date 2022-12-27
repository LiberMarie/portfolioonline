simBWF=require('simBWF')
local isCustomizationScript=sim.getScriptAttribute(sim.getScriptHandle(sim.handle_self),sim.scriptattribute_scripttype)==sim.scripttype_customizationscript

if false then -- if not sim.isPluginLoaded('Bwf') then
    function sysCall_init()
    end
else
    function sysCall_init()
        model={}
        simBWF.appendCommonModelData(model,simBWF.modelTags.RAGNARGRIPPERPLATFORM)
        if isCustomizationScript then
            -- Customization script
            if model.modelVersion==1 then
                require("/bwf/scripts/ragnarGripperPlatform/common")
                require("/bwf/scripts/ragnarGripperPlatform/customization_main")
                require("/bwf/scripts/ragnarGripperPlatform/customization_data")
                require("/bwf/scripts/ragnarGripperPlatform/customization_ext")
                require("/bwf/scripts/ragnarGripperPlatform/customization_dlg")
            end
        else
            -- Child script
            if model.modelVersion==1 then
                require("/bwf/scripts/ragnarGripperPlatform/common")
                require("/bwf/scripts/ragnarGripperPlatform/child_main")
            end
        end
        sysCall_init() -- one of above's 'require' redefined that function
    end
end
