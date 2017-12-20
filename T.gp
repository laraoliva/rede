set terminal pdf size 1024, 768
set output "T.pdf"
set view map
set title "Relaxação Rede Quadrada"
set xlabel "x"
set ylabel "y"
set cbrange[0:100]
set pm3d map
splot "raio.dat" matrix with image
set output


