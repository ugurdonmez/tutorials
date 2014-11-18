cd sub

for dir in `ls`;
   do
      cd $dir
      g++ lab2.* -o question1
      
      cp ../../question1_inp/inp1/input.txt ./
      ./question1
      mv output.txt out1.txt
      mv input.txt inp1.txt
      
      cp ../../question1_inp/inp2/input.txt ./
      ./question1
      mv output.txt out2.txt
      mv input.txt inp2.txt
      
      cp ../../question1_inp/inp3/input.txt ./
      ./question1
      mv output.txt out3.txt
      mv input.txt inp3.txt
      
      cp ../../question1_inp/inp4/input.txt ./
      ./question1
      mv output.txt out4.txt
      mv input.txt inp4.txt
      
      
      cd ..
   done