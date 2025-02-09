function convertToRoman(num) {
    const values = [
        { value: 1000, simbol: "M" },
        { value: 900, simbol: "CM" },
        { value: 500, simbol: "D" },
        { value: 400, simbol: "CD" },
        { value: 100, simbol: "C" },
        { value: 90, simbol: "XC" },
        { value: 50, simbol: "L" },
        { value: 40, simbol: "XL" },
        { value: 10, simbol: "X" },
        { value: 9, simbol: "IX" },
        { value: 5, simbol: "V" },
        { value: 4, simbol: "IV" },
        { value: 1, simbol: "I" }
    ];
    let response = ""
  // Verificar maior algarismo menor que num
  for(let i=0; i < values.length; i++){
    while(num >= values[i].value){
        num -= values[i].value;
        response += values[i].simbol
    }
    }
   return response;
  }
  
convertToRoman(4);
