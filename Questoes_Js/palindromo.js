function palindrome(str) {
    //Regex retira os caracteres especiais
    str = str.replace(/[^a-zA-Z0-9]/g, "").toLowerCase(); 
    let array = str.split("");
    //Laço de comparação de cada caracter
    for(let i = 0; i < (str.length/2); i++){
      if (array[i] !== array[str.length-1-i]){
        return false;
      }
    }
    return true;
  }
  
  palindrome("_eye");