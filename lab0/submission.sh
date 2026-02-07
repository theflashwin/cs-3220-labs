## Bash command to create a submisison zip

# create the submission folder
mkdir -p submission && rm -rf submission/*

# move the files to the submission directory
cp 1-combinational_circuits/Q1.v submission/Q1.v
cp 2-vector_signals/Q2.v submission/Q2.v
cp 3-module_hierarchy/Q3.v submission/Q3.v
cp 4-always_block/Q4.v submission/Q4.v
cp 5-fsm/Q5.v submission/Q5.v
cp 6-alu/alu.v submission/alu.v
cp 7-fpu/fpu.v submission/fpu.v

# zip the file
cd submission && zip -r ../submission.zip . \
  -x "*.DS_Store" "__MACOSX/*" "*.swp" "*~"
