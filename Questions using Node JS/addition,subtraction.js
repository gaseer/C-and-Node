//Addition or Substraction questions
 let a,b;
 const prompt = require('prompt-sync')({sigint: true});

 var addSub= prompt('Do you want Addition or Subtraction (press + or - ): ');
 const num = prompt('Enter how many questions you want : ');
 
 const ques = prompt("Enter how many digits in it : ");
 if(ques>3) { console.log(" Enter a number less than 4 ");}

 for(let i=1;i<=num;i++)
 {
  switch(ques)
  {
    case '1':
      a=Math.floor(Math.random()*9);
      b=Math.floor(Math.random()*8);
      //Choosing which operation to be done
      if (addSub=='+')
        {
       console.log('\n%i. %i+%i = ?',i,a,b);
        }
      else if (addSub == '-') {
        console.log('\n%i. %i-%i = ?',i,a,b);
        } 
      else {
        console.log('\nYou choose wrong operator, choose either + or - ');
      }
    break;

    case '2':
      a=Math.floor(Math.random()*90)+10;
      b=Math.floor(Math.random()*80)+10;
      //Choosing which operation to be done
      if (addSub=='+')
        {
       console.log('\n%i. %i+%i = ?',i,a,b);
        }
      else if (addSub == '-') {
        console.log('\n%i. %i-%i = ?',i,a,b);
        } 
      else {
        console.log('\nYou choose wrong operator, choose either + or - ');
      }
    break;

    case '3':
      a=Math.floor(Math.random()*800)+100;
      b=Math.floor(Math.random()*700)+100;
      //Choosing which operation to be done      
      if (addSub=='+')
        {
        console.log('\n%i. %i+%i = ?',i,a,b);
         }
      else if (addSub == '-') {
       console.log('\n%i. %i-%i = ?',i,a,b);
       } 
      else {
        console.log('\nYou choose wrong operator, choose either + or - ');
      }
    break;
  }
}
