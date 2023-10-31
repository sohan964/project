console.log("withdraw");

document.getElementById('btn-withdraw').addEventListener('click',function(){
    const newWithdrawAmount = getInputFieldValueById('withdraw-field');

    const previousWithdrawTotal = getElementValueById('withdraw-total');

    const newWithdrawTotal = newWithdrawAmount + previousWithdrawTotal;

    setTextElementValueById('withdraw-total',newWithdrawTotal);

    const previousBalanceTotal = getElementValueById('balance-total');

    const newBalanceTotal = previousBalanceTotal - newWithdrawAmount;
    setTextElementValueById('balance-total', newBalanceTotal);
})