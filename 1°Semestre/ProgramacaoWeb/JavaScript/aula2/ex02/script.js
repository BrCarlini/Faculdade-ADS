/*
2. Crie uma função com um parâmetro capaz de verificar se um número é par ou ímpar. Use a função no corpo do
script duas vezes, uma passando um valor lido do usuário (prompt) e outra fornecendo o número 7, exibindo o
resultado para as duas chamadas em alerts.
*/

function checkNumber(num){
    if(num % 2 == 0){
        alert(`O número ${num} é par.`)
    }else{
        alert(`O número ${num} é ímpar`)
    }
}

let userNumber = Number(prompt("Informe o número: "))

checkNumber(userNumber)
checkNumber(7)
