//step1: addEventListener to the deposit button
document.getElementById('btn-deposit').addEventListener('click',function(){
    //step2:
    const depositField = document.getElementById('deposit-field');
    const newDepositAmount = parseFloat(depositField.value);
    console.log(typeof newDepositAmount);
    //console.log(depositAmount);

    //step3: get deposit-total
    const depositTotalElement = document.getElementById('deposit-total');

    //step4:
    const previousDepositTotal = parseFloat(depositTotalElement.innerText);
    console.log(typeof previousDepositTotal);

    const currentDepositTotal = previousDepositTotal + newDepositAmount;

    depositTotalElement.innerText = currentDepositTotal;

    //step 5
    const balanceTotalElement = document.getElementById('balance-total');

    const previousBalanceTotal = parseFloat(balanceTotalElement.innerText);

    const balanceTotal = previousBalanceTotal + newDepositAmount;

    balanceTotalElement.innerText = balanceTotal;

    //step7
    depositField.value='';

})
