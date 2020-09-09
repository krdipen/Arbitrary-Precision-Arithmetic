all:
	@gcc -c add.c
	@gcc -c sub.c
	@gcc -c mul.c
	@gcc -c div.c
	@gcc -c abs.c
	@gcc -c pow.c
	@gcc -c sqrt.c
	@ar cr libarbprecision.a add.o sub.o mul.o div.o abs.o pow.o sqrt.o
	@gcc -c addcpx.c
	@gcc -c subcpx.c
	@gcc -c mulcpx.c
	@gcc -c divcpx.c
	@gcc -c abscpx.c
	@gcc -c addstd.c
	@gcc -c substd.c
	@gcc -c mulstd.c
	@gcc -c divstd.c
	@gcc -c absstd.c
	@gcc -c mainfile.c
	@gcc -o mainfile mainfile.o addstd.o substd.o mulstd.o divstd.o absstd.o addcpx.o subcpx.o mulcpx.o divcpx.o abscpx.o -L. -larbprecision
	@./mainfile input.txt output.txt plot.png
	@rm mainfile
	@rm libarbprecision.a
	@rm mainfile.o addstd.o substd.o mulstd.o divstd.o absstd.o addcpx.o subcpx.o mulcpx.o divcpx.o abscpx.o add.o sub.o mul.o div.o abs.o pow.o sqrt.o
