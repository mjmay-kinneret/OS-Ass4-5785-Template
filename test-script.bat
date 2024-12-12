echo Test 1: No length
./longestwords tests/simple-tests  > outfiles/test1-no-length.txt

echo Test 2: No File
./longestwords 10 > outfiles/test2-no-files.txt

echo Test 3: Simple test longest 5 words 
./longestwords 5 tests/simple-tests  > outfiles/test3-simple-5.txt

echo Test 4: Simple test longest 10 words
./longestwords 10 tests/simple-tests  > outfiles/test4-simple-10.txt

echo Test 5: Simple test with second non-existent file longest 10 words
./longestwords 10 tests/filenotexist tests/simple-tests > outfiles/test5-simple-10-fakefile.txt

echo Test 6: Simple test longest 15 words
./longestwords 15 tests/simple-tests  > outfiles/test6-simple-15.txt

echo Test 7:  Three short files longest 5 words
./longestwords 5 tests/trivial1.txt tests/trivial2.txt tests/trivial3.txt > outfiles/test7-trivial-123-5.txt

echo Test 8:  Three short files longest 10 words
./longestwords 10 tests/trivial1.txt tests/trivial2.txt tests/trivial3.txt > outfiles/test8-trivial-123-10.txt

echo Test 9: Two long files longest 10 words
./longestwords 10 tests/moby-dick-sentences.txt tests/pride-sentences.txt  > outfiles/test9-moby-pride-10.txt

echo Test 10: Two long files longest 50 words
./longestwords 50 tests/moby-dick-sentences.txt tests/pride-sentences.txt  > outfiles/test10-moby-pride-50.txt

echo Test 11: Four long files longest 50 words
./longestwords 50 tests/moby-dick-sentences.txt tests/pride-sentences.txt tests/northanger-abbey-sentences.txt tests/frankenstein-sentences.txt > outfiles/test11-moby-pride-northanger-frankenstein-50.txt

echo Test 12: Four/Five long files longest 100 words 
./longestwords 100 tests/moby-dick-sentences.txt tests/moby-dick-sentences.txt tests/pride-sentences.txt tests/northanger-abbey-sentences.txt tests/frankenstein-sentences.txt > outfiles/test12-moby2-pride-northanger-frankenstein-100.txt
