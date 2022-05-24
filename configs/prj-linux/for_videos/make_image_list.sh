#!/bin/bash

# Core processing options
export INPUT_DIRECTORY=frames
export IMAGE_EXTENSION=*

ls ${INPUT_DIRECTORY}/*.${IMAGE_EXTENSION} > input_list.txt
