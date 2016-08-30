//
//  ShopViewController.h
//  ProyectoJoyas
//
//  Created by RobertoHerrera on 8/24/16.
//  Copyright © 2016 RobertoHerrera. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Home.h"
#import "PayPalMobile.h"

@interface ShopViewController : UIViewController<PayPalPaymentDelegate, PayPalFuturePaymentDelegate, PayPalProfileSharingDelegate>
@property NSString *stuffNames;
@property NSString *stuffPrices;
@property NSString *stuffMaterial;
@property NSString *stuffImgs;
@property (strong, nonatomic) IBOutlet UILabel *lblProduct;
@property (strong, nonatomic) IBOutlet UIImageView *imgProduct;
@property (strong, nonatomic) IBOutlet UILabel *PriceProduct;
@property (strong, nonatomic) IBOutlet UITextView *DesProduct;
@property (strong, nonatomic) IBOutlet UILabel *MaterialProduct;

@property (strong, nonatomic) IBOutlet UIButton *btnBack;
- (IBAction)btnPressBack:(id)sender;
@property (strong, nonatomic) IBOutlet UIButton *btnBuy;
@property (strong, nonatomic) IBOutlet UITextField *textQuant;
@property (strong, nonatomic) IBOutlet UILabel *lblTotal;
@end
