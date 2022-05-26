/*
3. Escreva um programa que exiba qualquer tabuada completa. O programa deve perguntar ao 
usuário qual tabuada ele deseja visualizar. O usuário deverá responder digitando um 
número de 1 a 10 e a tabuada deverá ser exibida na página.
*/

function clique(){
    let caixaEntrada = document.getElementById('numero')
    let dadoCaixa = Number(caixaEntrada.value)
    let resp = document.getElementById('resp')

    if(dadoCaixa <= 0 || dadoCaixa > 10){
        alert('Informe número entre 1 e 10')
    } else {
        for(i = 1; i <= 10; i++){
            let op = dadoCaixa * i

            resp.innerText = `${dadoCaixa} x ${i} = ${op}` 

            
        }
    }




    console.log(typeof(dadoCaixa))
}