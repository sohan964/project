//step1:
document.getElementById('btn-withdraw').addEventListener('click',function(){
    //step:2
    const withdrawField = document.getElementById('withdraw-field');

    const newWithdrawAmount = parseFloat(withdrawField.value);

    //console.log(newWithdrawAmount)

    //step3
    const withdrawTotalElement = document.getElementById('withdraw-total');

    const previousWithdrawTotal =parseFloat(withdrawTotalElement.innerText);

    //step4
    const currentWithdrawTotal = newWithdrawAmount + previousWithdrawTotal;

    withdrawTotalElement.innerText = currentWithdrawTotal;

    //step5
    const balanceTotalElement = document.getElementById('balance-total');

    const previousBalanceTotal = parseFloat(balanceTotalElement.innerText);

    const balanceTotal = previousBalanceTotal - newWithdrawAmount;

    //step6
    balanceTotalElement.innerText = balanceTotal;
    
    //step7
    withdrawField.value='';
})
