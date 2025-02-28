function checkCashRegister(price, cash, cid) {
    const currencyValues = {
      "PENNY": 0.01,
      "NICKEL": 0.05,
      "DIME": 0.1,
      "QUARTER": 0.25,
      "ONE": 1,
      "FIVE": 5,
      "TEN": 10,
      "TWENTY": 20,
      "ONE HUNDRED": 100
    };
  
    let changeDue = cash-price;
  
    let totalCid = cid.reduce((total, [, amount]) => total + amount, 0);
  
    if (totalCid < changeDue) {
      return { status: "INSUFFICIENT_FUNDS", change: [] };
    }
  
    let change = [];
  
    for (let i = cid.length - 1; i >= 0; i--) {
      const [unit, amountAvailable] = cid[i];
      const unitValue = currencyValues[unit];
  
      let unitCount = Math.min(Math.floor(changeDue / unitValue), amountAvailable / unitValue);
  
      if (unitCount > 0) {
        change.push([unit, unitCount * unitValue]);
        changeDue = (changeDue - unitCount * unitValue).toFixed(2);
      }
    }
  
    if (changeDue == 0) {
      if (totalCid === cash - price) {
        return { status: "CLOSED", change: cid };
      } else {
        return { status: "OPEN", change };
      }
    } else {
      return { status: "INSUFFICIENT_FUNDS", change: [] };
    }
  }
  
  console.log(
    checkCashRegister(19.5, 20, [
      ["PENNY", 1.01],
      ["NICKEL", 2.05],
      ["DIME", 3.1],
      ["QUARTER", 4.25],
      ["ONE", 90],
      ["FIVE", 55],
      ["TEN", 20],
      ["TWENTY", 60],
      ["ONE HUNDRED", 100]
    ])
  );

  console.log(
    checkCashRegister(19.5, 20, [
      ["PENNY", 0.5],
      ["NICKEL", 0],
      ["DIME", 0],
      ["QUARTER", 0],
      ["ONE", 0],
      ["FIVE", 0],
      ["TEN", 0],
      ["TWENTY", 0],
      ["ONE HUNDRED", 0]
    ])
  );