# Import the modules
import json
import csv

# Open the .json file and load the data
with open("data.json", "r") as json_file:
    data = json.load(json_file)

# Open the .csv file and write the data
with open("data.csv", "w") as csv_file:
    # Create a csv writer object
    csv_writer = csv.writer(csv_file)

    # Write the header row
    csv_writer.writerow(data[0].keys())

    # Write the data rows
    for row in data:
        csv_writer.writerow(row.values())
