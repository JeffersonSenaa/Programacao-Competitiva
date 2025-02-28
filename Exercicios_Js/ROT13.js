function rot13(str) {
    var decode = "";
    for(let i=0; i < str.length; i++){
        
        //Verifica se o caracter atende a Regex
        if(/[A-Z]/g.test(str[i])){
            let char = str.charCodeAt(i);

            if (char >= 65 && char <= 77) {
                // Para letras de A a M, soma 13
                char += 13;
              } else {
                // Para letras de N a Z, subtrai 13
                char -= 13;
              }

            decode += String.fromCharCode(char);
            continue;
        }
        decode +=str[i];
    }
    return decode;
  }
  
  console.log(rot13("SERR PBQR PNZC"));