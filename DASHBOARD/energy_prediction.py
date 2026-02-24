import numpy as np
from sklearn.linear_model import LinearRegression

# Sample historical energy usage data
hours = np.array([[1], [2], [3], [4], [5]])
energy_usage = np.array([12, 18, 26, 32, 40])

model = LinearRegression()
model.fit(hours, energy_usage)

future_hour = np.array([[6]])
predicted_energy = model.predict(future_hour)

print("Predicted Energy Consumption for Next Hour:", predicted_energy[0])