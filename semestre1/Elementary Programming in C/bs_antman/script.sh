
cd antman
./antman > ../test1
cd ..
cd giantman
./giantman > ../test2
cd ..
diff -v test1 test2