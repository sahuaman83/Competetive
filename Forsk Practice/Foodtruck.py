
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

df = pd.read_csv("Foodtruck.csv")

features = df.iloc[:,:1]
labels = df.iloc[:,1:]

regression = LinearRegression()

regression.fit(features,labels)

l=[3.073]
x=np.array(l)
x=x.reshape(1,1)

print(regression.predict(x))

plt.title('Population VS Profit')
plt.xlabel('Population')
plt.ylabel('Profit')


plt.scatter(features, labels, color = 'red')
plt.plot(features, regression.predict(features), color = 'blue')

plt.show()