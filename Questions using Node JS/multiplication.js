//Multiplication questions

 let a,b;
 const prompt = require('prompt-sync')({sigint: true});

 const num = prompt('Enter how many Multiplication questions you want : ');

 const ques = prompt("and how many digits in it : ");
 if(ques>3) { console.log(" Enter a number less than 4 ");}

for(let i=1;i<=num;i++)
{
  switch(ques)
  {
    case '1':
    a=Math.floor(Math.random()*9);
    b=Math.floor(Math.random()*8);
    console.log('\n%i. %i*%i = ?',a,b);
    break;

    case '2':
    a=Math.floor(Math.random()*90)+10;
    b=Math.floor(Math.random()*80)+10;
    console.log('\n%i. %i*%i = ?',i,a,b);
    break;

    case '3':
    a=Math.floor(Math.random()*800)+100;
    b=Math.floor(Math.random()*700)+100;
    console.log('\n%i. %i*%i = ?',i,a,b);
    break;
  }
 }
