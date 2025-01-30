  #include<stdio.h>
  int  main()

  {
  
  char c[50];
  printf("Please enter your name:");
  fgets(c,sizeof(c),stdin);
  puts(c);
  printf("Good Morning ");
  puts(c);

  return 0;
}