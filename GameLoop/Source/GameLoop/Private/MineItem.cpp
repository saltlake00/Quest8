// Fill out your copyright notice in the Description page of Project Settings.


#include "MineItem.h"

AMineItem::AMineItem()
{
	ExpolosionDelay = 5.0f;
	ExpolosionRadius = 300.0f;
	ExpolosionDamage = 30.0f;
	ItemType = "Mine";
}

void AMineItem::ActivateItem(AActor* Activator)
{
	DestroyItem();
}