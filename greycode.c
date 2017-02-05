grey_code(n){
   for(int a[n],k,i=0;i<1<<n;puts(""),i++){
      for(int j=~-n,k=i;-~j;a[j--]=k&1,k>>=1);
      for(int j=k=0;j<n;printf("%d",k?(a[j]-a[~-j]?1:0):(!~-a[j]&&k++,a[j])),j++);
   }
}
main(argc,argv){
	~-argc&&grey_code(atoi(*(int*)(argv+sizeof(int*))));
}