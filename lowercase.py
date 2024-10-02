import os
import pathlib
import shutil

folder = os.getcwd()

for path in pathlib.Path(folder).glob("*.*"):
	print(path)
	path2 = path.parent.joinpath(str(path.name).lower())
	shutil.move(path, path2)