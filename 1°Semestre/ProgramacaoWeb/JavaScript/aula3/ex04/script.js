/*
4. Crie 3 botões contendo raças de cachorros. A cada clique em um dos botões, uma imagem 
representando a raça de cachorro deve ser adicionada na página.

*/


function clique1(){
    let img = document.createElement('img')
    let div = document.querySelector('div#resp')

    //img.setAttribute('src', 'husky.jpg')
    img.src = 'husky.jpg'

    div.appendChild(img)
}


function clique2(){
    let img = document.createElement('img')
    let div = document.querySelector('div#resp')

    //img.setAttribute('src', 'lhasa.jpg')
    img.src = 'lhasa.jpg'

    div.appendChild(img)
}

function clique3(){
    let img = document.createElement('img')
    let div = document.getElementById('resp')

    img.setAttribute('src', 'golden.jpg')
    //img.src = 'golden.jpg'

    div.appendChild(img)
}
