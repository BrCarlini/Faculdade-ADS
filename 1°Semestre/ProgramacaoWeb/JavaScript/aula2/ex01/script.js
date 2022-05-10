/* 
1. Crie uma função com dois parâmetros capaz de verificar qual número passado como parâmetro é o maior e
retorná-lo. Use a função no corpo do script passando dois valores numéricos lidos do usuário (prompt) e exiba
qual o maior valor na tela.
*/
function numMaior(num1, num2){
    let maior = 0

    if(num1 > num2){
        maior = num1
    } else{
        maior = num2
    }

    return maior
}

let userNum1 = Number(prompt("Informe o 1° número: "))
let userNum2 = Number(prompt("Informe o 2° número: "))

result = numMaior(userNum1, userNum2)

alert(`O Maior número é o ${result}`)