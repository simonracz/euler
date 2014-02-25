#!/bin/bash

#ls -1 | grep problem | sort -n -k1.8 | tail -n 1

COUNTER=`ls -1 | grep problem | sort -n -k1.8 | tail -n 1 | cut -c 8,9,10`
COUNTER=$[COUNTER + 1]
NEWDIR="./problem"$COUNTER

OLDDIR=`ls -1 | grep problem | sort -n -k1.8 | tail -n 1`
OLDDIR="./"$OLDDIR

cp -rf $OLDDIR $NEWDIR

echo Copied $OLDDIR to $NEWDIR. 

# ls -1 | grep problem | sort -n -k1.8 | tail -n 1 | cut -c 8,9,10

 

