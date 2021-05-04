#!/usr/bin/env bash

project_name='poo2_unit2_task2_v2021'
source_code='
  p1.h p1.cpp
  p2.h p2.cpp
  p3.h p3.cpp
  p4.h p4.cpp
  linked_link.h
'
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}