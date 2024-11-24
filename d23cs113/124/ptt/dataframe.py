# note that datatype and datashape these two keywords are inly used when we import a package
# shape is only calculated when we are dealing with dataframes
#dataframs is all about 2D
import pandas as pd
data={'name':['nick','tom','krish'],'age':[20,30,40]}
print(data)
print(type(data))
# covert dictionary into dataframes
df=pd.DataFrame(data)
print(df)
print(f"printing only the name of the column")
print(df[['name']])
print("printing only a specific element")
select_element=df.loc[df["name"]=="tom"]
print(select_element)

