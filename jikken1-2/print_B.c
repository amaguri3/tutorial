#define EXTIO_PRINT_STROKE (*(volatile unsigned int *) 0x0300)//プロセッサデータメモリの0x0300番地
#define EXTIO_PRINT_ASCII  (*(volatile unsigned int *) 0x0304)//0x0304番地
main()
{
  // for(;;){
    EXTIO_PRINT_STROKE = (unsigned int)0x00000000;//0x0300に 0x00000000格納
    EXTIO_PRINT_ASCII = (unsigned int)0x00000002;//0304 00000002
    EXTIO_PRINT_STROKE = (unsigned int)0x00000001;//0300 00000001
    // }
}
