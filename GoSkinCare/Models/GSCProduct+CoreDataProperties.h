//
//  GSCProduct+CoreDataProperties.h
//  GoSkinCare
//
//  Created by Luokey on 11/26/15.
//  Copyright © 2015 Luokey. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "GSCProduct.h"

NS_ASSUME_NONNULL_BEGIN

@interface GSCProduct (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *productName;
@property (nullable, nonatomic, retain) NSString *productId;
@property (nullable, nonatomic, retain) NSNumber *price;
@property (nullable, nonatomic, retain) NSString *priceCurrency;
@property (nullable, nonatomic, retain) NSString *priceCurrencySymbol;
@property (nullable, nonatomic, retain) NSString *detail;
@property (nullable, nonatomic, retain) NSString *imageUrlSmall;
@property (nullable, nonatomic, retain) NSString *imageUrlMedium;
@property (nullable, nonatomic, retain) NSString *imageUrlLarge;

@end

NS_ASSUME_NONNULL_END
