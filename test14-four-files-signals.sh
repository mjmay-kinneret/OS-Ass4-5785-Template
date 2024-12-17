#!/bin/bash

echo Run Test 14: Four files and 5 Ctrl C
./longestwords 150 tests/moby-dick-sentences.txt tests/pride-sentences.txt tests/northanger-abbey-sentences.txt tests/frankenstein-sentences.txt > outfiles/test14-moby-pride-northanger-frankenstein-signal.txt 2>outfiles/test14-words-so-far&

for i in {1..5}; do
  sleep 2
  kill -SIGINT $!
  echo Sent Ctrl+C signal
done

