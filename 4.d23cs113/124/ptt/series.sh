# note that datatype and datashape these two keywords are inly used when we import a package
# shape is only calculated when we are dealing with dataframes
#dataframs is all about 2D
# lets now deal with series
import pandas as pd
data=[10,20,30,40]
series=pd.Series(data,index=['a','b','c','d'])
print(series)
# by default the datatype of series is printed at the end
print("after converting to dict")
print(series.to_dict())
print("after converting to stings")
print(series.to_string(index=True))
	
