
if ! test -e Makefile
then
    bash install_pkg.sh
    
    if uname -a | grep Android
    then
        #./configure --with-optimize --prefix=$HOME
        #./configure --prefix=$HOME --with-debug --with-come-debug
        #./configure --prefix=$HOME --with-debug --with-optimize
        #./configure --prefix=$HOME --with-debug --with-optimize --with-original-postion --with-gc
        #./configure --prefix=$HOME --with-debug --with-original-postion --with-leak
        ./configure --prefix=$HOME --with-debug --with-original-postion --with-optimize --with-leak
    else
        #./configure --with-optimize
        #./configure --with-debug --with-come-debug
        #./configure --with-debug --with-optimize
        #./configure --with-debug --with-optimize --with-original-position --with-gc
        #./configure --with-debug --with-original-position
        #./configure --with-debug --with-original-position --with-optimize --with-leak
        ./configure --with-debug --with-original-position --with-optimize  --with-leak
    fi
fi

if uname -a | grep Android
then
    make comelang2 && make install
else
    make comelang2 && sudo make install
fi
