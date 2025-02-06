import uuid

# Use a namespace (Object Identifier)
namespace = uuid.NAMESPACE_OID

# Get input from user
name = input("Enter sensor name: ")
datapoint = input("Enter datapoint name: ")

print(f"Generating UUID for {name}.{datapoint}")
# Generate a version 5 UUID
random_uuid = uuid.uuid5(namespace, name + "." + datapoint)

# Print the UUID
print(f"Generated UUID: {random_uuid}")
