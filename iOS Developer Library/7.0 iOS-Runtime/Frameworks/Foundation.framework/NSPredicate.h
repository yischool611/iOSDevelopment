/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSPredicate : NSObject <NSSecureCoding, NSCopying> {
    struct _predicateFlags { 
        unsigned int _evaluationBlocked : 1; 
        unsigned int _reservedPredicateFlags : 31; 
    } _predicateFlags;
}

@property(copy,readonly) NSString * predicateFormat;

+ (void)initialize;
+ (id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned int)arg2;
+ (id)predicateForAssetsInAssetCollectionWithID:(id)arg1;
+ (id)predicateForCloudInvitationsInAssetCollection:(id)arg1;
+ (id)predicateForCommentsInAsset:(id)arg1;
+ (id)predicateForLikesInAsset:(id)arg1;
+ (id)predicateWithBlock:(id)arg1;
+ (id)predicateWithCKDPQueryFilters:(id)arg1 translator:(id)arg2;
+ (id)predicateWithFormat:(id)arg1 argumentArray:(id)arg2;
+ (id)predicateWithFormat:(id)arg1 arguments:(void*)arg2;
+ (id)predicateWithFormat:(id)arg1;
+ (id)predicateWithSortedCKDPQueryFilters:(id)arg1 translator:(id)arg2;
+ (id)predicateWithValue:(BOOL)arg1;
+ (struct __CFLocale { }*)retainedLocale;
+ (BOOL)supportsSecureCoding;

- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;
- (BOOL)_allowsEvaluation;
- (void)_validateForMetadataQueryScopes:(id)arg1;
- (void)ab_addCallbackContextToArray:(struct __CFArray { }*)arg1;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (BOOL)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 addressBook:(void*)arg2 propertyIndices:(const struct __CFDictionary {}**)arg3;
- (void)ab_runPredicateWithSortOrder:(unsigned int)arg1 inAddressBook:(void*)arg2 withDelegate:(id)arg3;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (void)allowEvaluation;
- (id)br_watchedURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (BOOL)evaluateWithObject:(id)arg1;
- (id)generateMetadataDescription;
- (id)hk_filterRepresentationForDataTypes:(id)arg1 filterClasses:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)minimalFormInContext:(id)arg1;
- (id)predicateFormat;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (void)validate;

@end