#!/bin/sh

if [ -z $1 ]
then
	echo "No arguments supplied"
fi

mkdir -p class srcs

for i in $*; do
	cpp=$i.cpp
	hpp=$i.hpp
	touch $hpp
	touch $cpp
	
	CPP=$cpp | tr 'a-z' 'A-Z'
	echo "#ifndef" $CPP > $hpp
	mv $cpp srcs
	mv $hpp class
done
