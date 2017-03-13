Feature: User authentication
  In order to protect the integrity of the website
  As a product owner
  I want to make sure only administrators users can access the site administration

Scenario: Anonymous can't see the administration pages
  Given I am not logged in
  When I visit "admin"
  Then I should see the text "Access denied" in the "messages" region

@api
Scenario: Authenticated users can't see the administration pages
  Given I am logged in as a user with the "authenticated user" role
  Given I am on "admin"
  Then the response status code should be 403

@api
Scenario: Administrators can see the stats page and admin pages
  Given I am logged in as a user with the "administrator" role
  Given I am on the homepage
  Then I should see the text "Stats" in the "menu" region
  And I visit "analytics"
  Then I should see the heading "Site analytics" in the "content" region
  And I visit "admin"
  Then I should see the text Administration

Scenario: Anonymous user can see the user login page
  Given I am not logged in
  When I visit "user"
  Then I should see the text "Username"
  And I should see the text "Password"
  But I should not see the text "Log out"
  And I should not see the text "My account"

Scenario: All main pages are accessible for anonymous, except the stats page
  Given I am not logged in
  Given I am on the homepage
  Then I should see the text "Futures" in the "menu" region
  And I should see the text "Ideas" in the "menu" region
  And I should see the text "Library" in the "menu" region
  And I should see the text "Events" in the "menu" region
  But I should not see the text "Stats" in the "menu" region


