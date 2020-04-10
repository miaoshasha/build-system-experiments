#!/bin/bash


bazel run //lib_1:use_lib1_binary

bazel run //lib_1/tests:test1

