package main

import (
	"context"
	"fmt"
	"log"

	"go.mongodb.org/mongo-driver/bson"
	"go.mongodb.org/mongo-driver/mongo"
	"go.mongodb.org/mongo-driver/mongo/options"
)

type Trainer struct {
	Name string
	Age  int
	City string
}

func main() {
	// ==================================
	// connection
	// ==================================
	clientOptions := options.Client().ApplyURI("mongodb://localhost:27017")
	client, err := mongo.Connect(context.TODO(), clientOptions)
	if err != nil {
		log.Fatal(err)
	}
	err = client.Ping(context.TODO(), nil)
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("Connected to MongoDB!")

	// ==================================
	// declare db & collection
	// ==================================
	collection := client.Database("mqttJS").Collection("mqttJS")

	// ==================================
	// insert data
	// ==================================
	// ash := Trainer{"Ash", 10, "Pallet Town"}
	// misty := Trainer{"Misty", 10, "Cerulean City"}
	// brock := Trainer{"Brock", 15, "Pewter City"}

	// // insertOne
	// insertResult, err := collection.InsertOne(context.TODO(), ash)
	// if err != nil {
	// 	log.Fatal(err)
	// }
	// fmt.Println("Inserted a single document: ", insertResult.InsertedID)

	// // insert many
	// trainers := []interface{}{misty, brock}
	// insertManyResult, err := collection.InsertMany(context.TODO(), trainers)
	// if err != nil {
	// 	log.Fatal(err)
	// }
	// fmt.Println("Inserted multiple documents: ", insertManyResult.InsertedIDs)

	// ==================================
	// update that match filter
	// ==================================
	// filter := bson.D{{"name", "Brock"}}
	// update := bson.D{
	// 	{"$inc", bson.D{
	// 		{"age", 10},
	// 	}},
	// }
	// updateResult, err := collection.UpdateOne(context.TODO(), filter, update)
	// if err != nil {
	// 	log.Fatal(err)
	// }

	// fmt.Printf("Matched %v doc & updated %v doc.\n", updateResult.MatchedCount, updateResult.ModifiedCount)

	// ==================================
	// find that match filter
	// ==================================

	// find one
	// var result Trainer
	// filter := bson.D{{"name", "Ash"}}
	// err = collection.FindOne(context.TODO(), filter).Decode(&result)
	// if err != nil {
	// 	log.Fatal(err)
	// }
	// fmt.Printf("Found a single document: %+v\n", result)

	// find all
	findOptions := options.Find()
	findOptions.SetLimit(2)
	// filter := bson.D{{}}
	filter := bson.D{{"name", "Ash"}}
	var results []*Trainer
	cur, err := collection.Find(context.TODO(), filter, findOptions)
	if err != nil {
		log.Fatal(err)
	}
	for cur.Next(context.TODO()) {
		var elem Trainer
		err := cur.Decode(&elem)
		if err != nil {
			log.Fatal(err)
		}
		results = append(results, &elem)
	}
	if err := cur.Err(); err != nil {
		log.Fatal(err)
	}
	cur.Close(context.TODO())
	fmt.Printf("Found multiple documents (array of pointers): %+v\n", results)
	fmt.Println(*results[0])
	fmt.Println(*results[1])

	// ==================================
	// delete all data that match filter
	// ==================================
	// filter := bson.D{{"name", "Ash"}}
	// deleteResult, err := collection.DeleteMany(context.TODO(), filter)
	// if err != nil {
	// 	log.Fatal(err)
	// }
	// fmt.Printf("Deleted %v doc\n", deleteResult.DeletedCount)
}
