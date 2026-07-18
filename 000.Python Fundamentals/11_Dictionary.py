a = {"key": "value", "harry": "code", "marks": "100", "list": [1, 2, 9]}
print(a["key"])  # Output: "value"
print(a["list"])  # Output: [1, 2, 9]
print(a["marks"])
# methods
a.items()
print(a.items())
print(a)
print(a.keys())
print(a)
# provide a valid value for the new key
a.update({"friend": "safin"})
print(a)
a.get("name")
print(a)