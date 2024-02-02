function addCar() {
    const carType = document.getElementById('carType').value;
    const name = document.getElementById('name').value;
    const model = document.getElementById('model').value;
    const year = document.getElementById('year').value;

    let additionalField;
    if (carType === 'Electric') {
        const batteryCapacity = prompt('Enter battery capacity (kWh):');
        additionalField = `Battery Capacity: ${batteryCapacity} kWh`;
    } else if (carType === 'Gas') {
        const fuelEfficiency = prompt('Enter fuel efficiency (MPG):');
        additionalField = `Fuel Efficiency: ${fuelEfficiency} MPG`;
    }

    const carList = document.getElementById('carList');
    const listItem = document.createElement('li');
    listItem.textContent = `${carType} - ${name} ${model} (${year}) - ${additionalField}`;
    carList.appendChild(listItem);

    // Clear form fields
    document.getElementById('carForm').reset();
}
