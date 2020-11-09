# -*- coding: utf-8 -*-
"""
Created on Wed Jun 24 14:21:53 2020

@author: Aman
"""

import pandas as pd

df=pd.read_csv("salaries.csv")

df[df.isnull().any(axis=0)]