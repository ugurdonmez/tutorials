cd ws

for dir in `ls`;
   do      
      echo $dir
      cd $dir
      rm -rf *txt
      rm -rf *exe
      rm -rf *out
                
               
                
      cd ..
   done