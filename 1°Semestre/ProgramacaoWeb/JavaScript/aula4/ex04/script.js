/*
Faça um programa que exiba na página uma contagem regressiva de 10 até 0 usando laços 
de repetição. Exemplo: 10... 9... 8... 7... 6... 5... 4... 3... 2... 1...

*/

/*
for(i = 10; i >= 0; i--){
    alert(`${i}...`)
}
alert('FIM!')
*/




for(i = 10; i >= 0; i--){
    let p = document.createElement('p')
    document.body.appendChild(p)
    p.innerText = `${i}...`
}
