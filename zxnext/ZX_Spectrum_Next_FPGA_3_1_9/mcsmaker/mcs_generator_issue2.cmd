@set PATH=C:\Xilinx\14.7\ISE_DS\ISE\bin\nt64;%PATH%

promgen -w -p mcs -c FF -o zxnext -s 16384 -u 00000 zxnext_ab_issue2_top.bit -data_file up 7dd40 zxnext_ab.bin -u 80000 zxnext_top_issue2.bit -spi

pause
