set terminal png size 1000,880
set output 'mandelplot.png'
set xrange [-2:0.5]
set yrange [-1.1:1.1]
set xlabel 'Re(C)'
set ylabel 'Im(C)'
unset key
plot 'mandelbrot.dat' u 1:2 with points pt 7 ps 0.5 lc rgb 'red'
