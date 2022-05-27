/*
3. Escreva um programa que exiba qualquer tabuada completa. O programa deve perguntar ao 
usuário qual tabuada ele deseja visualizar. O usuário deverá responder digitando um 
número de 1 a 10 e a tabuada deverá ser exibida na página.
*/

function clique(){
    let caixaEntrada = document.getElementById('numero')
    let dadoCaixa = Number(caixaEntrada.value)
    let div = document.createElement('div')
    let h4 = document.createElement('h4')

    

    if(dadoCaixa <= 0 || dadoCaixa > 10){
        alert('Informe número entre 1 e 10')
    } else {
        document.body.appendChild(div)
        div.innerText = '======================================='

        document.body.appendChild(h4)
        h4.innerText = `Tabuada do ${dadoCaixa}`

        for(i = 1; i <= 10; i++){
            let op = dadoCaixa * i
            let p = document.createElement('p')
            
            document.body.appendChild(p)

            p.innerText = `${dadoCaixa} x ${i} = ${op}`

            //console.log(`${dadoCaixa} x ${i} = ${op}`)
        }

        
    }




    
}