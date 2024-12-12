#!/bin/bash

echo Test 13: Two files top 100 words and 3 Ctrl C
./longestwords 100 tests/moby-dick-sentences.txt tests/pride-sentences.txt  > outfiles/test13-moby-pride-signal.txt 2>outfiles/test13-words-so-far&

for i in {1..3}; do
  sleep 2
  kill -SIGINT $!
  echo Sent Ctrl+C signal
done


