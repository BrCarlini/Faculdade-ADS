/*
3. Crie uma função capaz de retornar a mesma string duas vezes, uma com todos os caracteres maiúsculos, outra
com todos minúsculos (procure como fazer isso em JavaScript e separe as duas versões da palavra com um
espaço). Defina uma outra função, capaz de ler um valor de texto do usuário usando prompt, chamar a função
anterior com o parâmetro e exibir o valor resultante para o usuário num alert. Por fim, defina um h1 no HTML
(texto qualquer) que, quando clicado, exiba o resultado, chamando a segunda função.
*/

function conversorDeString(text){
    alert(`${text.toUpperCase()} - ${text.toLowerCase()}`)
}

conversorDeString("Hello World")