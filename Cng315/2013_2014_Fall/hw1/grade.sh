cd ws

for dir in `ls`;
   do
      cd $dir
      
      rm -rf inp*
      rm -rf out*
      rm -rf sol*
      g++ * -o solution	

      cp ../../inp1/input.txt ./
      ./solution
      mv output.txt out1.txt
      mv input.txt inp1.txt

      cp ../../inp2/input.txt ./
      ./solution
      mv output.txt out2.txt
      mv input.txt inp2.txt
      
      cp ../../inp3/input.txt ./
      ./solution
      mv output.txt out3.txt
      mv input.txt inp3.txt
      
      cp ../../inp4/input.txt ./
      ./solution
      mv output.txt out4.txt
      mv input.txt inp4.txt
      
      
      cd ..
   done
